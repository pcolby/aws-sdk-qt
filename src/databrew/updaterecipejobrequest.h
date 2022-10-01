// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECIPEJOBREQUEST_H
#define QTAWS_UPDATERECIPEJOBREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class UpdateRecipeJobRequestPrivate;

class QTAWSDATABREW_EXPORT UpdateRecipeJobRequest : public DataBrewRequest {

public:
    UpdateRecipeJobRequest(const UpdateRecipeJobRequest &other);
    UpdateRecipeJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRecipeJobRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
