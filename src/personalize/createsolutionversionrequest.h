// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESOLUTIONVERSIONREQUEST_H
#define QTAWS_CREATESOLUTIONVERSIONREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class CreateSolutionVersionRequestPrivate;

class QTAWSPERSONALIZE_EXPORT CreateSolutionVersionRequest : public PersonalizeRequest {

public:
    CreateSolutionVersionRequest(const CreateSolutionVersionRequest &other);
    CreateSolutionVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSolutionVersionRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
