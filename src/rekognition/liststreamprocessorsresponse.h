// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMPROCESSORSRESPONSE_H
#define QTAWS_LISTSTREAMPROCESSORSRESPONSE_H

#include "rekognitionresponse.h"
#include "liststreamprocessorsrequest.h"

namespace QtAws {
namespace Rekognition {

class ListStreamProcessorsResponsePrivate;

class QTAWSREKOGNITION_EXPORT ListStreamProcessorsResponse : public RekognitionResponse {
    Q_OBJECT

public:
    ListStreamProcessorsResponse(const ListStreamProcessorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStreamProcessorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStreamProcessorsResponse)
    Q_DISABLE_COPY(ListStreamProcessorsResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
