// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVODSOURCEREQUEST_H
#define QTAWS_CREATEVODSOURCEREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class CreateVodSourceRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT CreateVodSourceRequest : public MediaTailorRequest {

public:
    CreateVodSourceRequest(const CreateVodSourceRequest &other);
    CreateVodSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVodSourceRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
