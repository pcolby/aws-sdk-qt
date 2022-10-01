// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTTEMPLATESRESPONSE_H
#define QTAWS_LISTENVIRONMENTTEMPLATESRESPONSE_H

#include "protonresponse.h"
#include "listenvironmenttemplatesrequest.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentTemplatesResponsePrivate;

class QTAWSPROTON_EXPORT ListEnvironmentTemplatesResponse : public ProtonResponse {
    Q_OBJECT

public:
    ListEnvironmentTemplatesResponse(const ListEnvironmentTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEnvironmentTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEnvironmentTemplatesResponse)
    Q_DISABLE_COPY(ListEnvironmentTemplatesResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
