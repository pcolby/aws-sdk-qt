// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIALIZESERVICEREQUEST_H
#define QTAWS_INITIALIZESERVICEREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class InitializeServiceRequestPrivate;

class QTAWSDRS_EXPORT InitializeServiceRequest : public DrsRequest {

public:
    InitializeServiceRequest(const InitializeServiceRequest &other);
    InitializeServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitializeServiceRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
