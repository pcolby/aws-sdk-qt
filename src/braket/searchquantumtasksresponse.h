// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHQUANTUMTASKSRESPONSE_H
#define QTAWS_SEARCHQUANTUMTASKSRESPONSE_H

#include "braketresponse.h"
#include "searchquantumtasksrequest.h"

namespace QtAws {
namespace Braket {

class SearchQuantumTasksResponsePrivate;

class QTAWSBRAKET_EXPORT SearchQuantumTasksResponse : public BraketResponse {
    Q_OBJECT

public:
    SearchQuantumTasksResponse(const SearchQuantumTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchQuantumTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchQuantumTasksResponse)
    Q_DISABLE_COPY(SearchQuantumTasksResponse)

};

} // namespace Braket
} // namespace QtAws

#endif
