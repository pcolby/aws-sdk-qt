// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONFROMENVIRONMENTREQUEST_H
#define QTAWS_DELETEAPPLICATIONFROMENVIRONMENTREQUEST_H

#include "m2request.h"

namespace QtAws {
namespace M2 {

class DeleteApplicationFromEnvironmentRequestPrivate;

class QTAWSM2_EXPORT DeleteApplicationFromEnvironmentRequest : public M2Request {

public:
    DeleteApplicationFromEnvironmentRequest(const DeleteApplicationFromEnvironmentRequest &other);
    DeleteApplicationFromEnvironmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationFromEnvironmentRequest)

};

} // namespace M2
} // namespace QtAws

#endif
