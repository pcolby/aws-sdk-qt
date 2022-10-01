// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHSMREQUEST_H
#define QTAWS_DELETEHSMREQUEST_H

#include "cloudhsmv2request.h"

namespace QtAws {
namespace CloudHsmV2 {

class DeleteHsmRequestPrivate;

class QTAWSCLOUDHSMV2_EXPORT DeleteHsmRequest : public CloudHsmV2Request {

public:
    DeleteHsmRequest(const DeleteHsmRequest &other);
    DeleteHsmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHsmRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
