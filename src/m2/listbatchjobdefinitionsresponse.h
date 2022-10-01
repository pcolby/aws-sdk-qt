// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBATCHJOBDEFINITIONSRESPONSE_H
#define QTAWS_LISTBATCHJOBDEFINITIONSRESPONSE_H

#include "m2response.h"
#include "listbatchjobdefinitionsrequest.h"

namespace QtAws {
namespace M2 {

class ListBatchJobDefinitionsResponsePrivate;

class QTAWSM2_EXPORT ListBatchJobDefinitionsResponse : public M2Response {
    Q_OBJECT

public:
    ListBatchJobDefinitionsResponse(const ListBatchJobDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBatchJobDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBatchJobDefinitionsResponse)
    Q_DISABLE_COPY(ListBatchJobDefinitionsResponse)

};

} // namespace M2
} // namespace QtAws

#endif
