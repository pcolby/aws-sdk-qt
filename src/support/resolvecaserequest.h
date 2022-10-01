// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVECASEREQUEST_H
#define QTAWS_RESOLVECASEREQUEST_H

#include "supportrequest.h"

namespace QtAws {
namespace Support {

class ResolveCaseRequestPrivate;

class QTAWSSUPPORT_EXPORT ResolveCaseRequest : public SupportRequest {

public:
    ResolveCaseRequest(const ResolveCaseRequest &other);
    ResolveCaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResolveCaseRequest)

};

} // namespace Support
} // namespace QtAws

#endif
