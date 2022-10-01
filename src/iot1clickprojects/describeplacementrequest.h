// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLACEMENTREQUEST_H
#define QTAWS_DESCRIBEPLACEMENTREQUEST_H

#include "iot1clickprojectsrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class DescribePlacementRequestPrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT DescribePlacementRequest : public IoT1ClickProjectsRequest {

public:
    DescribePlacementRequest(const DescribePlacementRequest &other);
    DescribePlacementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePlacementRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
