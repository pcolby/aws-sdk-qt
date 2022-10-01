// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERHIERARCHYRESPONSE_H
#define QTAWS_UPDATEUSERHIERARCHYRESPONSE_H

#include "connectresponse.h"
#include "updateuserhierarchyrequest.h"

namespace QtAws {
namespace Connect {

class UpdateUserHierarchyResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateUserHierarchyResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateUserHierarchyResponse(const UpdateUserHierarchyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateUserHierarchyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserHierarchyResponse)
    Q_DISABLE_COPY(UpdateUserHierarchyResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
