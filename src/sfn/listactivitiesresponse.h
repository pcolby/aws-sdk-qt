// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIVITIESRESPONSE_H
#define QTAWS_LISTACTIVITIESRESPONSE_H

#include "sfnresponse.h"
#include "listactivitiesrequest.h"

namespace QtAws {
namespace Sfn {

class ListActivitiesResponsePrivate;

class QTAWSSFN_EXPORT ListActivitiesResponse : public SfnResponse {
    Q_OBJECT

public:
    ListActivitiesResponse(const ListActivitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListActivitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListActivitiesResponse)
    Q_DISABLE_COPY(ListActivitiesResponse)

};

} // namespace Sfn
} // namespace QtAws

#endif
