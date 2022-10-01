// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECIPEREQUEST_H
#define QTAWS_CREATERECIPEREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class CreateRecipeRequestPrivate;

class QTAWSDATABREW_EXPORT CreateRecipeRequest : public DataBrewRequest {

public:
    CreateRecipeRequest(const CreateRecipeRequest &other);
    CreateRecipeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRecipeRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
