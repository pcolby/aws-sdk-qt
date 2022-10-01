// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPASSESSMENTSRESPONSE_H
#define QTAWS_LISTAPPASSESSMENTSRESPONSE_H

#include "resiliencehubresponse.h"
#include "listappassessmentsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppAssessmentsResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT ListAppAssessmentsResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    ListAppAssessmentsResponse(const ListAppAssessmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAppAssessmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppAssessmentsResponse)
    Q_DISABLE_COPY(ListAppAssessmentsResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
