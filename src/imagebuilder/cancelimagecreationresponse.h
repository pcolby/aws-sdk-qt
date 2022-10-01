// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELIMAGECREATIONRESPONSE_H
#define QTAWS_CANCELIMAGECREATIONRESPONSE_H

#include "imagebuilderresponse.h"
#include "cancelimagecreationrequest.h"

namespace QtAws {
namespace ImageBuilder {

class CancelImageCreationResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT CancelImageCreationResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    CancelImageCreationResponse(const CancelImageCreationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelImageCreationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelImageCreationResponse)
    Q_DISABLE_COPY(CancelImageCreationResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
