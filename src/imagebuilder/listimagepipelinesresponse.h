// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEPIPELINESRESPONSE_H
#define QTAWS_LISTIMAGEPIPELINESRESPONSE_H

#include "imagebuilderresponse.h"
#include "listimagepipelinesrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListImagePipelinesResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT ListImagePipelinesResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    ListImagePipelinesResponse(const ListImagePipelinesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListImagePipelinesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImagePipelinesResponse)
    Q_DISABLE_COPY(ListImagePipelinesResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
