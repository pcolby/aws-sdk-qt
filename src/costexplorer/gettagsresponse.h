// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTAGSRESPONSE_H
#define QTAWS_GETTAGSRESPONSE_H

#include "costexplorerresponse.h"
#include "gettagsrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetTagsResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT GetTagsResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    GetTagsResponse(const GetTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTagsResponse)
    Q_DISABLE_COPY(GetTagsResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
