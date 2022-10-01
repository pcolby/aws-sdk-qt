// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECIPEREQUEST_H
#define QTAWS_UPDATERECIPEREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class UpdateRecipeRequestPrivate;

class QTAWSDATABREW_EXPORT UpdateRecipeRequest : public DataBrewRequest {

public:
    UpdateRecipeRequest(const UpdateRecipeRequest &other);
    UpdateRecipeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRecipeRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
