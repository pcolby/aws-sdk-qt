// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICETEMPLATEVERSIONSRESPONSE_H
#define QTAWS_LISTSERVICETEMPLATEVERSIONSRESPONSE_H

#include "protonresponse.h"
#include "listservicetemplateversionsrequest.h"

namespace QtAws {
namespace Proton {

class ListServiceTemplateVersionsResponsePrivate;

class QTAWSPROTON_EXPORT ListServiceTemplateVersionsResponse : public ProtonResponse {
    Q_OBJECT

public:
    ListServiceTemplateVersionsResponse(const ListServiceTemplateVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServiceTemplateVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceTemplateVersionsResponse)
    Q_DISABLE_COPY(ListServiceTemplateVersionsResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
