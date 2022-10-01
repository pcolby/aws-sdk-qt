// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBJECTSRESPONSE_H
#define QTAWS_LISTSUBJECTSRESPONSE_H

#include "rolesanywhereresponse.h"
#include "listsubjectsrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class ListSubjectsResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT ListSubjectsResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    ListSubjectsResponse(const ListSubjectsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSubjectsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSubjectsResponse)
    Q_DISABLE_COPY(ListSubjectsResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
