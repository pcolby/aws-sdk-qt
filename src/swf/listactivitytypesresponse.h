// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIVITYTYPESRESPONSE_H
#define QTAWS_LISTACTIVITYTYPESRESPONSE_H

#include "swfresponse.h"
#include "listactivitytypesrequest.h"

namespace QtAws {
namespace Swf {

class ListActivityTypesResponsePrivate;

class QTAWSSWF_EXPORT ListActivityTypesResponse : public SwfResponse {
    Q_OBJECT

public:
    ListActivityTypesResponse(const ListActivityTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListActivityTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListActivityTypesResponse)
    Q_DISABLE_COPY(ListActivityTypesResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
