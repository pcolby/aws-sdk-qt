// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIALIZESERVICEREQUEST_H
#define QTAWS_INITIALIZESERVICEREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class InitializeServiceRequestPrivate;

class QTAWSMGN_EXPORT InitializeServiceRequest : public MgnRequest {

public:
    InitializeServiceRequest(const InitializeServiceRequest &other);
    InitializeServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitializeServiceRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
