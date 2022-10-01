// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADENTITYDEFINITIONSRESPONSE_H
#define QTAWS_UPLOADENTITYDEFINITIONSRESPONSE_H

#include "iotthingsgraphresponse.h"
#include "uploadentitydefinitionsrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class UploadEntityDefinitionsResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT UploadEntityDefinitionsResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    UploadEntityDefinitionsResponse(const UploadEntityDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UploadEntityDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadEntityDefinitionsResponse)
    Q_DISABLE_COPY(UploadEntityDefinitionsResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
