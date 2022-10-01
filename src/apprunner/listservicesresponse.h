// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICESRESPONSE_H
#define QTAWS_LISTSERVICESRESPONSE_H

#include "apprunnerresponse.h"
#include "listservicesrequest.h"

namespace QtAws {
namespace AppRunner {

class ListServicesResponsePrivate;

class QTAWSAPPRUNNER_EXPORT ListServicesResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    ListServicesResponse(const ListServicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServicesResponse)
    Q_DISABLE_COPY(ListServicesResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif
