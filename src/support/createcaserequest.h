// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECASEREQUEST_H
#define QTAWS_CREATECASEREQUEST_H

#include "supportrequest.h"

namespace QtAws {
namespace Support {

class CreateCaseRequestPrivate;

class QTAWSSUPPORT_EXPORT CreateCaseRequest : public SupportRequest {

public:
    CreateCaseRequest(const CreateCaseRequest &other);
    CreateCaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCaseRequest)

};

} // namespace Support
} // namespace QtAws

#endif
