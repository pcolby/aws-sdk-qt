// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOLUTIONVERSIONSRESPONSE_H
#define QTAWS_LISTSOLUTIONVERSIONSRESPONSE_H

#include "personalizeresponse.h"
#include "listsolutionversionsrequest.h"

namespace QtAws {
namespace Personalize {

class ListSolutionVersionsResponsePrivate;

class QTAWSPERSONALIZE_EXPORT ListSolutionVersionsResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    ListSolutionVersionsResponse(const ListSolutionVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSolutionVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSolutionVersionsResponse)
    Q_DISABLE_COPY(ListSolutionVersionsResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
