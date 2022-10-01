// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKERSWITHQUALIFICATIONTYPERESPONSE_H
#define QTAWS_LISTWORKERSWITHQUALIFICATIONTYPERESPONSE_H

#include "mturkresponse.h"
#include "listworkerswithqualificationtyperequest.h"

namespace QtAws {
namespace MTurk {

class ListWorkersWithQualificationTypeResponsePrivate;

class QTAWSMTURK_EXPORT ListWorkersWithQualificationTypeResponse : public MTurkResponse {
    Q_OBJECT

public:
    ListWorkersWithQualificationTypeResponse(const ListWorkersWithQualificationTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWorkersWithQualificationTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkersWithQualificationTypeResponse)
    Q_DISABLE_COPY(ListWorkersWithQualificationTypeResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
