// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENABLEDCONTROLSREQUEST_H
#define QTAWS_LISTENABLEDCONTROLSREQUEST_H

#include "controltowerrequest.h"

namespace QtAws {
namespace ControlTower {

class ListEnabledControlsRequestPrivate;

class QTAWSCONTROLTOWER_EXPORT ListEnabledControlsRequest : public ControlTowerRequest {

public:
    ListEnabledControlsRequest(const ListEnabledControlsRequest &other);
    ListEnabledControlsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEnabledControlsRequest)

};

} // namespace ControlTower
} // namespace QtAws

#endif
