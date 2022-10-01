// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTEBOOKEXECUTIONSRESPONSE_H
#define QTAWS_LISTNOTEBOOKEXECUTIONSRESPONSE_H

#include "emrresponse.h"
#include "listnotebookexecutionsrequest.h"

namespace QtAws {
namespace Emr {

class ListNotebookExecutionsResponsePrivate;

class QTAWSEMR_EXPORT ListNotebookExecutionsResponse : public EmrResponse {
    Q_OBJECT

public:
    ListNotebookExecutionsResponse(const ListNotebookExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNotebookExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNotebookExecutionsResponse)
    Q_DISABLE_COPY(ListNotebookExecutionsResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
