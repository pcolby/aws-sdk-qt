// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGESINRECYCLEBINRESPONSE_H
#define QTAWS_LISTIMAGESINRECYCLEBINRESPONSE_H

#include "ec2response.h"
#include "listimagesinrecyclebinrequest.h"

namespace QtAws {
namespace Ec2 {

class ListImagesInRecycleBinResponsePrivate;

class QTAWSEC2_EXPORT ListImagesInRecycleBinResponse : public Ec2Response {
    Q_OBJECT

public:
    ListImagesInRecycleBinResponse(const ListImagesInRecycleBinRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListImagesInRecycleBinRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImagesInRecycleBinResponse)
    Q_DISABLE_COPY(ListImagesInRecycleBinResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
