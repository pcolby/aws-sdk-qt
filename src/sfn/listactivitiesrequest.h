// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIVITIESREQUEST_H
#define QTAWS_LISTACTIVITIESREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class ListActivitiesRequestPrivate;

class QTAWSSFN_EXPORT ListActivitiesRequest : public SfnRequest {

public:
    ListActivitiesRequest(const ListActivitiesRequest &other);
    ListActivitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListActivitiesRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
