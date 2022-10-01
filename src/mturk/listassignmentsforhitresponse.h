// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSIGNMENTSFORHITRESPONSE_H
#define QTAWS_LISTASSIGNMENTSFORHITRESPONSE_H

#include "mturkresponse.h"
#include "listassignmentsforhitrequest.h"

namespace QtAws {
namespace MTurk {

class ListAssignmentsForHITResponsePrivate;

class QTAWSMTURK_EXPORT ListAssignmentsForHITResponse : public MTurkResponse {
    Q_OBJECT

public:
    ListAssignmentsForHITResponse(const ListAssignmentsForHITRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssignmentsForHITRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssignmentsForHITResponse)
    Q_DISABLE_COPY(ListAssignmentsForHITResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
