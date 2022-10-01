// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMPROCESSORRESPONSE_H
#define QTAWS_DELETESTREAMPROCESSORRESPONSE_H

#include "rekognitionresponse.h"
#include "deletestreamprocessorrequest.h"

namespace QtAws {
namespace Rekognition {

class DeleteStreamProcessorResponsePrivate;

class QTAWSREKOGNITION_EXPORT DeleteStreamProcessorResponse : public RekognitionResponse {
    Q_OBJECT

public:
    DeleteStreamProcessorResponse(const DeleteStreamProcessorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStreamProcessorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStreamProcessorResponse)
    Q_DISABLE_COPY(DeleteStreamProcessorResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
