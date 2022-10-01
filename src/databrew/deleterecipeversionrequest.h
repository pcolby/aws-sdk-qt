// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECIPEVERSIONREQUEST_H
#define QTAWS_DELETERECIPEVERSIONREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class DeleteRecipeVersionRequestPrivate;

class QTAWSDATABREW_EXPORT DeleteRecipeVersionRequest : public DataBrewRequest {

public:
    DeleteRecipeVersionRequest(const DeleteRecipeVersionRequest &other);
    DeleteRecipeVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecipeVersionRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
