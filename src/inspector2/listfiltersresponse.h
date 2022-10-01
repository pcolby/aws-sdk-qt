// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFILTERSRESPONSE_H
#define QTAWS_LISTFILTERSRESPONSE_H

#include "inspector2response.h"
#include "listfiltersrequest.h"

namespace QtAws {
namespace Inspector2 {

class ListFiltersResponsePrivate;

class QTAWSINSPECTOR2_EXPORT ListFiltersResponse : public Inspector2Response {
    Q_OBJECT

public:
    ListFiltersResponse(const ListFiltersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFiltersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFiltersResponse)
    Q_DISABLE_COPY(ListFiltersResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
