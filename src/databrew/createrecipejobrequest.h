// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECIPEJOBREQUEST_H
#define QTAWS_CREATERECIPEJOBREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class CreateRecipeJobRequestPrivate;

class QTAWSDATABREW_EXPORT CreateRecipeJobRequest : public DataBrewRequest {

public:
    CreateRecipeJobRequest(const CreateRecipeJobRequest &other);
    CreateRecipeJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRecipeJobRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
