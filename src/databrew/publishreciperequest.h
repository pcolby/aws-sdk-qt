// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHRECIPEREQUEST_H
#define QTAWS_PUBLISHRECIPEREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class PublishRecipeRequestPrivate;

class QTAWSDATABREW_EXPORT PublishRecipeRequest : public DataBrewRequest {

public:
    PublishRecipeRequest(const PublishRecipeRequest &other);
    PublishRecipeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishRecipeRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
