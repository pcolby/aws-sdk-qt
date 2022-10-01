// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEDULESREQUEST_H
#define QTAWS_LISTSCHEDULESREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class ListSchedulesRequestPrivate;

class QTAWSDATABREW_EXPORT ListSchedulesRequest : public DataBrewRequest {

public:
    ListSchedulesRequest(const ListSchedulesRequest &other);
    ListSchedulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSchedulesRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
