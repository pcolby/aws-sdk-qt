// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDINDICESRESPONSE_H
#define QTAWS_LISTATTACHEDINDICESRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listattachedindicesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListAttachedIndicesResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListAttachedIndicesResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    ListAttachedIndicesResponse(const ListAttachedIndicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAttachedIndicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttachedIndicesResponse)
    Q_DISABLE_COPY(ListAttachedIndicesResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
