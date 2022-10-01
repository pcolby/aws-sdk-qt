// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLACEMENTSREQUEST_H
#define QTAWS_LISTPLACEMENTSREQUEST_H

#include "iot1clickprojectsrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class ListPlacementsRequestPrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT ListPlacementsRequest : public IoT1ClickProjectsRequest {

public:
    ListPlacementsRequest(const ListPlacementsRequest &other);
    ListPlacementsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPlacementsRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
