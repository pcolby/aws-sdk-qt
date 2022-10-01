// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCETYPESRESPONSE_H
#define QTAWS_LISTRESOURCETYPESRESPONSE_H

#include "ramresponse.h"
#include "listresourcetypesrequest.h"

namespace QtAws {
namespace Ram {

class ListResourceTypesResponsePrivate;

class QTAWSRAM_EXPORT ListResourceTypesResponse : public RamResponse {
    Q_OBJECT

public:
    ListResourceTypesResponse(const ListResourceTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourceTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceTypesResponse)
    Q_DISABLE_COPY(ListResourceTypesResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
