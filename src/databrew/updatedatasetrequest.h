// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETREQUEST_H
#define QTAWS_UPDATEDATASETREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class UpdateDatasetRequestPrivate;

class QTAWSDATABREW_EXPORT UpdateDatasetRequest : public DataBrewRequest {

public:
    UpdateDatasetRequest(const UpdateDatasetRequest &other);
    UpdateDatasetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDatasetRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
