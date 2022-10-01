// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCHANNELPOLICYREQUEST_H
#define QTAWS_PUTCHANNELPOLICYREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class PutChannelPolicyRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT PutChannelPolicyRequest : public MediaTailorRequest {

public:
    PutChannelPolicyRequest(const PutChannelPolicyRequest &other);
    PutChannelPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutChannelPolicyRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
