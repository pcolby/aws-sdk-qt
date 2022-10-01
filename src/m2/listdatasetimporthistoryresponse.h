// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETIMPORTHISTORYRESPONSE_H
#define QTAWS_LISTDATASETIMPORTHISTORYRESPONSE_H

#include "m2response.h"
#include "listdatasetimporthistoryrequest.h"

namespace QtAws {
namespace M2 {

class ListDataSetImportHistoryResponsePrivate;

class QTAWSM2_EXPORT ListDataSetImportHistoryResponse : public M2Response {
    Q_OBJECT

public:
    ListDataSetImportHistoryResponse(const ListDataSetImportHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDataSetImportHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataSetImportHistoryResponse)
    Q_DISABLE_COPY(ListDataSetImportHistoryResponse)

};

} // namespace M2
} // namespace QtAws

#endif
