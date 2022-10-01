// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICETEMPLATESRESPONSE_H
#define QTAWS_LISTSERVICETEMPLATESRESPONSE_H

#include "protonresponse.h"
#include "listservicetemplatesrequest.h"

namespace QtAws {
namespace Proton {

class ListServiceTemplatesResponsePrivate;

class QTAWSPROTON_EXPORT ListServiceTemplatesResponse : public ProtonResponse {
    Q_OBJECT

public:
    ListServiceTemplatesResponse(const ListServiceTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServiceTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceTemplatesResponse)
    Q_DISABLE_COPY(ListServiceTemplatesResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
