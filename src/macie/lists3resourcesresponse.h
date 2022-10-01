// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTS3RESOURCESRESPONSE_H
#define QTAWS_LISTS3RESOURCESRESPONSE_H

#include "macieresponse.h"
#include "lists3resourcesrequest.h"

namespace QtAws {
namespace Macie {

class ListS3ResourcesResponsePrivate;

class QTAWSMACIE_EXPORT ListS3ResourcesResponse : public MacieResponse {
    Q_OBJECT

public:
    ListS3ResourcesResponse(const ListS3ResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListS3ResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListS3ResourcesResponse)
    Q_DISABLE_COPY(ListS3ResourcesResponse)

};

} // namespace Macie
} // namespace QtAws

#endif
