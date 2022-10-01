// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTOUTPUTSRESPONSE_H
#define QTAWS_LISTCOMPONENTOUTPUTSRESPONSE_H

#include "protonresponse.h"
#include "listcomponentoutputsrequest.h"

namespace QtAws {
namespace Proton {

class ListComponentOutputsResponsePrivate;

class QTAWSPROTON_EXPORT ListComponentOutputsResponse : public ProtonResponse {
    Q_OBJECT

public:
    ListComponentOutputsResponse(const ListComponentOutputsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListComponentOutputsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComponentOutputsResponse)
    Q_DISABLE_COPY(ListComponentOutputsResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
