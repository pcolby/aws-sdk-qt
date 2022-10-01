// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESOLUTIONREQUEST_H
#define QTAWS_CREATESOLUTIONREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class CreateSolutionRequestPrivate;

class QTAWSPERSONALIZE_EXPORT CreateSolutionRequest : public PersonalizeRequest {

public:
    CreateSolutionRequest(const CreateSolutionRequest &other);
    CreateSolutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSolutionRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
