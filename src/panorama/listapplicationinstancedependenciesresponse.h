// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONINSTANCEDEPENDENCIESRESPONSE_H
#define QTAWS_LISTAPPLICATIONINSTANCEDEPENDENCIESRESPONSE_H

#include "panoramaresponse.h"
#include "listapplicationinstancedependenciesrequest.h"

namespace QtAws {
namespace Panorama {

class ListApplicationInstanceDependenciesResponsePrivate;

class QTAWSPANORAMA_EXPORT ListApplicationInstanceDependenciesResponse : public PanoramaResponse {
    Q_OBJECT

public:
    ListApplicationInstanceDependenciesResponse(const ListApplicationInstanceDependenciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListApplicationInstanceDependenciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationInstanceDependenciesResponse)
    Q_DISABLE_COPY(ListApplicationInstanceDependenciesResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
