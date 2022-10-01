// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETLABELSRESPONSE_H
#define QTAWS_LISTDATASETLABELSRESPONSE_H

#include "rekognitionresponse.h"
#include "listdatasetlabelsrequest.h"

namespace QtAws {
namespace Rekognition {

class ListDatasetLabelsResponsePrivate;

class QTAWSREKOGNITION_EXPORT ListDatasetLabelsResponse : public RekognitionResponse {
    Q_OBJECT

public:
    ListDatasetLabelsResponse(const ListDatasetLabelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDatasetLabelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatasetLabelsResponse)
    Q_DISABLE_COPY(ListDatasetLabelsResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
