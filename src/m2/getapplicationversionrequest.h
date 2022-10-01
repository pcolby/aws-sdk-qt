// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONVERSIONREQUEST_H
#define QTAWS_GETAPPLICATIONVERSIONREQUEST_H

#include "m2request.h"

namespace QtAws {
namespace M2 {

class GetApplicationVersionRequestPrivate;

class QTAWSM2_EXPORT GetApplicationVersionRequest : public M2Request {

public:
    GetApplicationVersionRequest(const GetApplicationVersionRequest &other);
    GetApplicationVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApplicationVersionRequest)

};

} // namespace M2
} // namespace QtAws

#endif
