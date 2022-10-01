// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETREQUEST_H
#define QTAWS_UPDATEDATASETREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateDataSetRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateDataSetRequest : public QuickSightRequest {

public:
    UpdateDataSetRequest(const UpdateDataSetRequest &other);
    UpdateDataSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDataSetRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
