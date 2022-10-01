// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKGROUPSRESPONSE_H
#define QTAWS_LISTWORKGROUPSRESPONSE_H

#include "athenaresponse.h"
#include "listworkgroupsrequest.h"

namespace QtAws {
namespace Athena {

class ListWorkGroupsResponsePrivate;

class QTAWSATHENA_EXPORT ListWorkGroupsResponse : public AthenaResponse {
    Q_OBJECT

public:
    ListWorkGroupsResponse(const ListWorkGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWorkGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkGroupsResponse)
    Q_DISABLE_COPY(ListWorkGroupsResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
