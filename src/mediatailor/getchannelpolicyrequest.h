// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELPOLICYREQUEST_H
#define QTAWS_GETCHANNELPOLICYREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class GetChannelPolicyRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT GetChannelPolicyRequest : public MediaTailorRequest {

public:
    GetChannelPolicyRequest(const GetChannelPolicyRequest &other);
    GetChannelPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChannelPolicyRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
